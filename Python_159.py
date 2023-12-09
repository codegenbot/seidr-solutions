def eat(number, need, remaining):
   total_eaten = number + need
   carrots_left = max(0, remaining - need)
   if carrots_left < 0:
       return [total_eaten, 0]
   else:
       return [total_eaten, carrots_left]