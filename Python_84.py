```
if K < 1:
    return "1"
elif math.log2(K) % 1 == 0:
    return bin(int(math.pow(2, math.ceil(math.log2(K)))) - 1)[2:]
else:
    return bin(K + 1)[2:]