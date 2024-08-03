def gcd(m, n):
    while n:
        m, n = n, m % n
    return abs(m)


def find_indices(text, target):
    indices = []
    start_index = 0
    while start_index < len(text):
        pos = text.find(target, start_index)
        if pos != -1:
            indices.append(pos)
            start_index = pos + 1
        else:
            break
    return indices


def main():
    m = int(input())
    n = int(input())
    print(gcd(m, n))


m = int(input())
n = int(input())
print(find_indices(input(), input()))

main()