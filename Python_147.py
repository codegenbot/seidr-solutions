```
print("Enter the number up to which you want to find max triples: ", end="")
n = int(input())

def get_max_triples(n):
    if n < 1:
        print("Invalid input. Please enter a positive integer.")
        return None
    max_sum = 0
    for i in range(1, n+1):
        triple_sum = 0
        for j in range(i*3-2, (i+1)*3):
            triple_sum += j
        if triple_sum > max_sum:
            max_sum = triple_sum
    return max_sum

print(get_max_triples(n))