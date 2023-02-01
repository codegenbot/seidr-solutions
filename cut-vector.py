from sys import stdin

if __name__ == '__main__':
    n = int(stdin.readline())
    s = list(map(int, stdin.readline().split()))
    if n % 2 == 0:
        print(n // 2)
        print(*s[::2], sep=' ')
        print(n // 2)
        print(*s[1::2], sep=' ')
    else:
        if n == 3:
            print(1)
            print(*s[::2], sep=' ')
            print(2)
            print(*s[1::2], sep=' ')
        else:
            print(n // 2 + 1)
            print(*s[::2], sep=' ')
            print(n // 2)
            print(*s[1::2], sep=' ')
