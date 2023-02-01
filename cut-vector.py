from sys import stdin


def print_array(array):
    print(len(array))
    print(*array, sep=' ')


if __name__ == '__main__':
    n = int(stdin.readline())
    s = list(map(int, stdin.readline().strip().split()))
    if n % 2 == 0:
        a = []
        b = []
        for i in range(n):
            if i % 2 == 0:
                a.append(s[i])
            else:
                b.append(s[i])
        print_array(a)
        print_array(b)
    else:
        a = s[0:1]
        b = s[1:]
        print_array(a)
        print_array(b)
