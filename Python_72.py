
def recursive_chain(n):

  def collatz_seq(number):
    seq = []
    while number != 1:
      seq.append(int(number))
      if number % 2:
        number = ((3*number) + 1)
      else:
        number = number/2
    seq.append(int(number))
    return seq

  temp_chain = collatz_seq(n)
  chain = [] + temp_chain
  while True:
    unpacked_seq = chain[:]
    minimum = min(unpacked_seq) * -1 +1
    unpacked_seq = unpacked_seq[minimum:]
    for n in unpacked_seq:
      possible_chain = collatz_seq(n)
      if any([x not in chain for x in possible_chain]):
        chain = chain + possible_chain
      else:
        unpacked_seq.remove(n)
    if len(unpacked_seq) < 2:
      break
  return max(chain)

  

Write a function that finds the longest Collatz chain from 1 up to the target.

Examples: 

# What is the longest Collatz chain whose starting number is smaller than 15?
The longest chain is made up of 8 numbers: 14, 7, 22, 11, 34, 17, 52, 26

# What does the recursive_chain(15) return?
8 

# What does the recursive_chain(123456789) return?
35

Hint: If you encounter with the similar problems in future, some of the modules
you learned about may come in handy, e.g. `itertools`
'''
    will_it_fly([3], 5) ➞ True
    # 3 is less than the maximum possible weight, and it's balanced.
    '''
