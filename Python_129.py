```
res = []
for x in sorted(res):
    if sum(x) == k:
        res = [x]
        break
else:
    res = []