```
def sort_third(lst):
    if len(lst) < 2:
        return lst
    
    counts = {}
    for num in lst:
        if num not in counts:
            counts[num] = 0
        counts[num] += 1

    sorted_counts = sorted(counts.items(), key=lambda x: x[1], reverse=True)

    return [num for pair in sorted_counts for _ in range(pair[1])]

user_input = input("Enter a list of numbers separated by comma: ")
user_input = [int(i) for i in user_input.split(",")]
print(sort_third(user_input))