def find_pair(n):
    s = list(map(int, input().split()))
    target = int(input())
    for i in range(len(s)):
        for j in range(i + 1, len(s)):
            if s[i] + s[j] == target:
                return str(s[i]) + "\n" + str(s[j])


print(find_pair(int(input())))