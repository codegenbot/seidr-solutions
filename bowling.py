def solve(input_string):
    def parse_frame(frame):
        if frame == "X":
            return 10
        elif "/" in frame:
            parts = frame.split("/")
            if parts[0] and parts[1].isdigit():
                return int(parts[0]) + int(parts[1])
            else:
                return sum(int(x) for x in frame)
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
            if frames[i].split("/")[0] and frames[i].split("/")[1].isdigit():
                score += int(frames[i].split("/")[0]) + int(frames[i].split("/")[1])
            else:
                score += parse_frame(frames[i])
            i += 1
        else:
            score += sum(int(x) for x in frames[i])
            i += 1
    if i < len(frames) - 1 and (frames[i : i + 2].replace("-", "/") in ["10/", "11/"]):
        if frames[i : i + 2].replace("-", "/") == "10/":
            score += 20
        else:
            score += 30
    print(score)

input_string = input("Enter the individual bowls: ")
solve(input_string)