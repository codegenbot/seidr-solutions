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

    score = 0
    i = 0
    while i < len(input("Enter the individual bowls: ").split()):
        if input("Enter the individual bowls: ").split()[i] == 'X':
            score += 10
            i += 1
            if i < len(input("Enter the individual bowls: ").split()) - 1 and (input("Enter the individual bowls: ").split()[i:i+2].replace('-', '/') in ['10/', '11/']):
                if input("Enter the individual bowls: ").split()[i:i+2].replace('-', '/') == '10/':
                    score += 20
                else:
                    score += 30
                i += 2
        elif '/' in input("Enter the individual bowls: ").split()[i]:
            parts = input("Enter the individual bowls: ").split()[i].split('/')
            score += int(parts[0]) + int(parts[1])
            i += 2
        else:
            score += sum(int(x) for x in input("Enter the individual bowls: ").split()[i])
            i += 1
    if i < len(input("Enter the individual bowls: ").split()) - 1 and (input("Enter the individual bowls: ").split()[i:i+2].replace('-', '/') in ['10/', '11/']):
        if input("Enter the individual bowls: ").split()[i:i+2].replace('-', '/') == '10/':
            score += 20
        else:
            score += 30
    print(score)