```
def solve(input_string):
    def parse_frame(frame):
        if frame == "X":
            return 10
        elif "X" not in frame and "/" in frame:
            parts = frame.split("/")
            return int(parts[0]) + int(parts[1])
        else:
            return sum(int(x) for x in frame)

    score = 0
    i = 0
    frames = input_string.split()
    while i < len(frames):
        if frames[i] == "X":
            score += 10
            i += 1
            if i < len(frames) - 1 and (frames[i : i + 2].replace("-", "/") in ["10/", "11/"]):
                if frames[i : i + 2].replace("-", "/") == "10/":
                    score += 20
                else:
                    score += 30
                i += 2
        elif "/" in frames[i]:
            score += parse_frame(frames[i])
            i += 1
        else:
            score += parse_frame(frames[i])
            i += 1
    print(score)


input_string = input("Enter the individual bowls: ")
solve(input_string)