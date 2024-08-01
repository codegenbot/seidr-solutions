a = int(input())
b = int(input())
c = int(input())

def find_zero(a: int, b: int, c: int):
    if c == 0:
        return -b / (2 * a)
    else:
        return -b / (2 * c)

result = find_zero(a, b, c)
print(result)