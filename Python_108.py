def count_nums(arr):
    def sum_of_digits(n):
        s = str(n)
        return sum(int(ch) for ch in s if ch.isdigit()) - int(s[0]) if s[0] == '-' else sum(int(ch) for ch in s)
    
    return sum(1 for num in arr if sum_of_digits(num) > 0)