```
def fruit_distribution(fruits, max_wt):
    fruit_dict = {}
    for fruit in fruits.split():
        if fruit not in fruit_dict:
            fruit_dict[fruit] = 0
        fruit_dict[fruit] += 1
    
    result = []
    for fruit, count in fruit_dict.items():
        weight = int(count / max_wt)
        remaining = count % max_wt
        result.append(f"{fruit} {weight} {remaining}")
    
    return '\n'.join(result)

fruits = " ".join(map(str, input().split()))
max_wt = int(input())
print(fruit_distribution(fruits, max_wt))
print(fruit_distribution(" ".join(map(str, input().split())), int(input())))