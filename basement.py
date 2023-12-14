

# You may modify this code if you want to
def read_ints():
    a = input()
    return [int(x) for x in a.split(',')]

[MARK]
[PATCH-INST]
    def is_negsum_from(a, idx):
        acc = 0
        for i in range(idx+1):
            acc += a[i]
            if acc < 0:
                return True
        return False
[/PATCH-INST]
    # Write your code here
# You may modify this code if you want to
for _ in range(int(input())):
    a = read_ints()
    for idx, x in enumerate(a):
        if x < 0 and is_negsum_from(a, idx):
            print(idx)
            break