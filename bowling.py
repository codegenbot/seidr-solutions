```
def solve(input_string):
    score = 0
    i = 0
    frames = input_string.split()
    for frame in frames:
        if frame == "X":
            score += 10
            i += 1
            if i < len(frames) - 1 and (frames[i] + frames[i+1]).replace("-", "/") in ["10/", "11/"]:
                if (frames[i] + frames[i+1]).replace("-", "/") == "10/":
                    score += 20
                else:
                    score += 30
                i += 2
        elif "/" in frame:
            if frame.split("/")[0] and frame.split("/")[1].isdigit():
                score += int(frame.split("/")[0]) + int(frame.split("/")[1])
            else:
                score += sum(int(x) for x in frame)
            i += 1
        else:
            score += sum(int(x) for x in frame)
            i += 1
    print(score)

input_string = input("Enter the individual bowls: ")
solve(input_string)