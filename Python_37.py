def sort_even(l: list):
    even_nums = sorted([abs(x) for x in l if x % 2 == 0])
    odd_nums = sorted([abs(x) for x in l if x % 2 != 0])
    result = set()
    i, j = 0, 0
    while i < len(even_nums) and j < len(odd_nums):
        if even_nums[i] <= odd_nums[j]:
            result.add(-even_nums[i] if even_nums[i] in even_nums else even_nums[i])
            i += 1
        else:
            result.add(-odd_nums[j] if odd_nums[j] in odd_nums else odd_nums[j])
            j += 1
    result.update(even_nums[i:])
    result.update(odd_nums[j:])
    return list(result)


if __name__ == "__main__":
    print(sort_even([5, 8, -12, 4, 23, 2, 3, 11, 12, -10]))