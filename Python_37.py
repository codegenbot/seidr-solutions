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


evens = list(map(int, input("Enter the even numbers separated by space: ").split()))
odds = list(map(int, input("Enter the odd numbers separated by space: ").split()))

print(sort_even(evens))