def fuel_cost(nums):
   return sum(int(round((n-2)/3)) for n in nums)