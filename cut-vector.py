#Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. 
#Return the two resulting subvectors as two outputs.

import numpy as np

def find_longest_equal_or_almost_sides(numbers):
  numbers = [int(x) for x in numbers]
  if len(numbers) < 2: 
    return None
  
  #try to find the longest subvectors on both sides 
  def find_longest_equal_sides(numbers, val):
    #print('--find_longest_equal_sides-', numbers, val);
    left, right = numbers[0], numbers[1]
    left_side = [left]
    
    diff = np.abs(left - right) 
    #print('  --loop-', numbers, left, right, diff)
    while diff <= val:
      left = right
      left_side.append(right)
      right = numbers[len(left_side)]
      diff = np.abs(left - right) 
      #print('  --loop-', numbers, left, right, diff, len(left_side))
      if len(left_side) == len(numbers) - 1:
        break
    
    print('result:', left_side)
    return left_side
  
  left_side = find_longest_equal_sides(numbers, 0)
  right_side = left_side
  if len(left_side) != len(numbers) - 1:
    numbers = numbers[len(left_side):] 
    right_side = find_longest_equal_sides(numbers, 1)

  if left_side == right_side: 
    return left_side

  return left_side  + right_side
  
  
if __name__ == '__main__':
  numbers = input()
  numbers = numbers.split(" ")
  print(numbers)
  print('----------')
  res = find_longest_equal_or_almost_sides(numbers)
  print(res)
