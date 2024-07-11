```
def merge(left, right):
    result = []
    i = j = 0
    while i < len(left) and j < len(right):
        if left[i] <= right[j]:
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1
    result.extend(left[i:])
    result.extend(right[j:])
    return result

def sort_even(evens):
    evens.sort()
    sorted_evens = [x for x in evens if x % 2 == 0]
    odd_nums = [x for x in evens if x % 2 != 0]
    return merge(sorted_evens, odd_nums)

evens = [2, 4, 6]
odds = [1, 3, 5]

print(sort_even(evens))