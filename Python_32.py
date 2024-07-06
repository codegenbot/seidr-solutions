def find_zero(xs):
   try:
       for i in range(len(xs)):
           if xs[i] == 0:
               return i
        return -1
    except IndexError:
        return None