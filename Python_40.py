```
def triples_sum_to_zero(l: list):
    n = len(l)
    for i in range(n):
        for j in range(i + 1, n):
            for k in range(j + 1, n):
                if l[i] + l[j] + l[k] == 0:
                    return True
    return False

user_input = list(map(int, input("Enter a list of integers (space-separated): ").split()))
if triples_sum_to_zero(user_input):
    print("There exists three numbers in the list that sum up to zero.")
else:
    print("No such triple exists.")