```
def solve():
    def parse_frame(frame):
        if frame == 'X':
            return 10
        elif '/' in frame:
            parts = frame.split('/')
            return int(parts[0]) + int(parts[1])
        else:
            return sum(int(x) for x in frame)

    def bowling_score(frames):
        score = 0
        i = 0
        while i < len(frames):
            if frames[i] == 'X':
                score += 10
                i += 1
                if i < len(frames) - 1 and (frames[i:i+2].replace('-', '/') in ['10/', '11/']):
                    if frames[i:i+2].replace('-', '/') == '10/':
                        score += 20
                    else:
                        score += 30
                    i += 2
            elif '/' in frames[i]:
                parts = frames[i].split('/')
                score += int(parts[0]) + int(parts[1])
                i += 2
            else:
                score += sum(int(x) for x in frames[i])
                i += 1
        if i < len(frames) - 1 and (frames[i:i+2].replace('-', '/') in ['10/', '11/']):
            if frames[i:i+2].replace('-', '/') == '10/':
                score += 20
            else:
                score += 30
        return score

    print(solve(input("Enter the individual bowls: ").split()))