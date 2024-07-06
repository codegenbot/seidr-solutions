
def find_zero(xs: list) -> int:
   for i in range(len(xs)):
       if xs[i] == 0:
           return i