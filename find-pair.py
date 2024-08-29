Here is the Python solution:

def find_pair(n):
    s = list(map(int, input().split()))
    for i in range(len(s)):
        for j in range(i+1, len(s)):
            if s[i] + s[j] == int(input()):
                return str(s[i]) + '\n' + str(s[j])

n = int(input())
print(find_pair(n))