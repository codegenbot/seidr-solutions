```
def fruit_distribution(s, n):
    s = s.replace("apples and ", "").replace("oranges ", ",")
    n = int(n)
    numbers = [num for num in s.split(", ") if num]
    return n - int(numbers[0].split()[0]) - int(numbers[-1].split()[0])