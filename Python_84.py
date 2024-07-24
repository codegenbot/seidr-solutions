```python
def generate_power_set(S):
    power_set = [[]]
    for s in S:
        power_set += [curr + [s] for curr in power_set]
    return power_set

S = input("Enter a set of numbers (space separated): ")
S = list(map(int, S.split()))
print(generate_power_set(S))