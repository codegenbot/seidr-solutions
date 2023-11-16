
def double_the_difference(lst):
    '''
    Given a list of numbers, return the sum of the squares of the numbers
    in the list that are odd. Ignore numbers that are negative or that are not integers.
    
    double_the_difference([1, 3, 2, 0]) == 1 + 9 + 0 + 0 = 10
    double_the_difference([-1, -2, 0]) == 0
    double_the_difference([9, -2]) == 81
Traceback (most recent call last):
  File "/global/D1/homes/anastasiia/research/secureIT/nl2ml-codex/venv_poetry/li
b/python3.11/site-packages/programlib/programs/90503209-3228-435f-906f-fc631f2b5
ac3.py", line 23, in <module>
    check(double_the_difference)
  File "/global/D1/homes/anastasiia/research/secureIT/nl2ml-codex/venv_poetry/li
b/python3.11/site-packages/programlib/programs/90503209-3228-435f-906f-fc631f2b5
ac3.py", line 19, in check
    double_the_difference(lst) == odd_sum
                                ^
IndentationError: unexpected indent...
NameError: name 'odd_sum' is not defined
    double_the_difference([0]) == 0  
   
    If the input list is empty, return 0.
    '''
