def calculate_greatest_common_divisor_and_factorize(num: int) -> (int, List[int]):
    greatest_common_divisor = num
    factors = factorize(num)
    
    for i in range(2, greatest_common_divisor + 1):
        while greatest_common_divisor % i == 0:
            greatest_common_divisor //= i
            
    return greatest_common_divisor, factors