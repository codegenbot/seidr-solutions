```
print("Enter three numbers separated by spaces: ", end="")
n1, n2, n3 = map(int, input().split())
def get_max_triples():
    max_sum = 0
    for i in range(1, (max(n1, n2, n3))+1):
        triple_sum = sum(range(i*3-2, (i+1)*3))
        if triple_sum > max_sum:
            max_sum = triple_sum
    return max_sum

print(get_max_triples())