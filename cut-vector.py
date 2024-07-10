```
def cut_vector(lst):
    first_half = sum(lst[:1])
    for i in range(1, len(lst)):
        diff = abs(first_half - sum(lst[i:]))

        if (first_half == sum(lst)) or (diff < sum(lst[:i]) - sum(lst[i:])):
            return lst[:i], lst[i:]

print(cut_vector([2, 1897, 2594]))