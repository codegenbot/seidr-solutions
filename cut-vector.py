from sys import stdin

if __name__ == '__main__':
    n = int(stdin.readline())
    s = list(map(int, stdin.readline().split()))
    if n % 2 == 0:
        print(n // 2)
        print(*s[:n//2], sep=' ')
        print(n // 2)
        print(*s[n//2:], sep=' ')
    else:
        print(n // 2 + 1 if n != 3 else 1)
        print(*s[:n//2+1] if n != 3 else [s[0]], sep=' ')
        print(n // 2)
        print(*s[n//2+1:] if n != 3 else s[1:], sep=' ')
