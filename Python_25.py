```
def find_prime_numbers(start: int, end: int) -> List[int]:
    prime_numbers = []
    for num in range(start, end + 1):
        if num > 1:
            is_prime = True
            for i in range(2, int(math.sqrt(num)) + 1):
                if num % i == 0:
                    is_prime = False
                    break
            if is_prime:
                prime_numbers.append(num)
    return prime_numbers