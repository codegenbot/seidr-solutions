```
def sum_product(*numbers: List[List[int]]) -> Tuple[int, int]:
    total_sum = 0
    product = 1
    for num_list in numbers:
        for num in num_list:
            total_sum += num
            product *= num
    return total_sum, product