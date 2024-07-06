
def digits(n):
   if n == 0:
       return 1
   else:
       return (n % 10) * digits(n // 10)