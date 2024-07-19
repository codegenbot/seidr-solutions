n = []
while True:
    try:
        num = int(input())
        n.append(num)
    except:
        break
print(sum(n))