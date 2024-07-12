import sys

def find_zero():
    xs = []
    while True:
        try:
            line = sys.stdin.readline().strip()
            if not line:
                break
            xs.extend(map(float, line.split()))
        except:
            break
    a = xs[-2]
    b = xs[-1]
    return -b / a

result = find_zero()
print(result)