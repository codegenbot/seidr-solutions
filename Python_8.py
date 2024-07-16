Here is the completed code:

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1
    
    for number in numbers:
        total_sum += number
        product *= number
        
    return (total_sum if len(numbers) > 0 else 0, product if len(numbers) > 0 else 1)