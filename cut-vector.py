from sys import stdin

if __name__ == '__main__':
    n = int(stdin.readline())
    s = list(map(int, stdin.readline().split()))
    a = []
    b = []
    for i in range(n):
        if i % 2 == 0:
            a.append(s[i])
        else:
            b.append(s[i])
    print(len(a))
    print(*a)
    print(len(b))
    print(*b)
