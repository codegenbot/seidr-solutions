

def largest_divisor(number: int) -> int:
    """ For a given number n, find the largest number that divides n evenly, smaller than n
    >>> largest_divisor(15)
    5
  target_number = 0
  for divisor in range(number // 2, 1, -1):
    if number % divisor == 0 and target_number != 1:
        target_number = divisor
    else:
        continue
  return target_number
    """
