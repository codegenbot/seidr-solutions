def sort_even(evens):
    evens.sort()
    sorted_evens = [x for x in evens if x % 2 == 0]
    odd_nums = [x for x in evens if x % 2 != 0]
    return merge(sorted_evens, odd_nums)

evens = input("Enter the numbers separated by space: ").split()
evens = list(map(int, evens))

print(sort_even(evens))