def solution(filename):
    with open(filename) as f:
        lines = f.readlines()
    return sum(int(line) for line in lines if int(line) % 2 != 0)