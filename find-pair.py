```
def find_pair():
    n = int(input())
    pairs = list(map(int, input().split()))
    target = int(input())
    for i in range(len(pairs)):
        for j in range(i+1, len(pairs)):
            if pairs[i] + pairs[j] == target:
                return "{} {}".format(pairs[i], pairs[j])

print(find_pair())