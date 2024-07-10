def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_res = 0
    prod_res = 1

    for num in numbers:
        sum_res += num
        prod_res *= num
    
    return sum_res, prod_res