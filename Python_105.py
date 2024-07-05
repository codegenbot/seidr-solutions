
def by_length(arr):
   result = []
   for num in arr:
      if isinstance(num, int):
         result.append(int(num))
      elif isinstance(num, str):
         result.append(num)
   result.sort()
   result.reverse()
   return result