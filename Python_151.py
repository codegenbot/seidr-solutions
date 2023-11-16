
def double_the_difference(lst):
    '''
    Given a list of numbers, return the sum of squares of the numbers
    in the list that are odd. Ignore numbers that are negative or not integers.
    
    double_the_difference([1, 3, 2, 0]) == 1 + 9 + 0 + 0 = 10
    double_the_difference([-1, -2, 0]) == 0
    double_the_difference([9, -2]) == 81
    double_the_difference([0]) == 0  
   
    If the input list is empty, return 0.
    '''
    return sum([(el*el) for el in lst if el % 2 == 1 and el > 0 and el == round(el)])

def get_next_sequential_day(ymd, n=1):
    '''
    Write a function get_next_sequential_day that takes a string and
    returns the date, one day later, in the same format (unless it's December 31,
    in which case, it returns January 1 of the next year).
    The date is in the format "YYYY-MM-DD" (that is, year-month-day). Ignoring leap years.
    
    get_next_sequential_day('2014.12.30') == '2014-12-31'
    get_next_sequential_day('2014-11-30') == '2014-12-01'
    get_next_sequential_day('2014.01.01') == '2014-01-02'
    get_next_sequential_day('2014-01-01') == '2014-01-02'
    get_next_sequential_day('2014-12-31') == '2015-01-01'
    get_next_sequential_day('2014-12-13') == '2014-12-14'

    '''
    try:
        year, month, day = [int(el) for el in ymd.split('-')]
    except:
        try:
            year, month, day = [int(el) for el in ymd.split('.')]
        except:
            print('Invalid date format!')
    
    if year % 4 == 0:
        if month == 2:
            if day < 29:
                return '{}-{}-{}'.format(year, month, day+n)
            elif day == 29:
                return '{}-{}-{}'.format(year, month+1, 1)
            elif day > 29:
                return "Invalid input!"
        elif month in [1,3,5,7,8,10,12]:
            if day < 31:
                return '{}-{}-{}'.format(year, month, day+n)
            elif day == 31:
                if month == 12:
                    return '{}-{}-{}'.format(year+1, 1, 1)
                else:
                    return '{}-{}-{}'.format(year, month+1, 1)
            elif day > 31:
                return "Invalid input!"
        elif month in [4,6,9,11]:
            if day < 30:
                return '{}-{}-{}'.format(year, month, day+n)
            elif day == 30:
                return '{}-{}-{}'.format(year, month+1, 1)
            elif day > 30:
                return "Invalid input!"
    else:
        if month == 2:
            if day < 28:
                return '{}-{}-{}'.format(year, month, day+n)
            elif day == 28:
                return '{}-{}-{}'.format(year, month+1, 1)
            elif day > 28:
                return "Invalid input!"
        elif month in [1,3,5,7,8,10,12]:
            if day < 31:
                return '{}-{}-{}'.format(year, month, day+n)
            elif day == 31:
                if month == 12:
                    return '{}-{}-{}'.format(year+1, 1, 1)
                else:
                    return '{}-{}-{}'.format(year, month+1, 1)
            elif day > 31:
                return "Invalid input!"
        elif month in [4,6,9,11]:
            if day < 30:
                return '{}-{}-{}'.format(year, month, day+n)
            elif day == 30:
                return '{}-{}-{}'.format(year, month+1, 1)
            elif day > 30:
                return "Invalid input!"


def are_anagrams(word_1, word_2):
    '''
    Write a function are_anagrams that takes two strings and returns True if they are anagrams.
    
    are_anagrams('cinema', 'iceman') == True
    are_anagrams('foo', 'bar') == False
    are_anagrams('foo', 'ofo') == True
    are_anagrams('abba', 'abba') == True
    are_anagrams('abb', 'bba') == True
    '''
    return sorted(word_1) == sorted(word_2)

def get_even_odd_frequency(lst):
    '''
    Write a function get_even_odd_frequency that takes a list and returns a list of two numbers. The first number is the number of even numbers in the list. The second number is the number of odd numbers in the list.
    get_even_odd_frequency([10,11,12,13,14]) == [3, 2]
    get_even_odd_frequency([1,2,3,4,5]) == [2, 3]
    get_even_odd_frequency([]) == [0, 0]
    get_even_odd_frequency([2,4,6,8,10]) == [5, 0]
    '''
    evens = lst.count(list(filter(lambda x: x % 2 == 0, lst)))
    odds = lst.count(list(filter(lambda x: x % 2 == 1, lst)))
    return [evens, odds]

def max_contiguous_sum(lst):
    '''
    Write a function max_contiguous_sum that takes a list and returns the maximum sum of a contiguous subsequence in the list.
    max_contiguous_sum([10, -2, -1, 3, 4]) == 18 == 10 - 2 - 1 + 3 + 4
    max_contiguous_sum([1,2,-1,3,4,-1]) == 9 == 1 + 2 - 1 + 3 + 4
    max_contiguous_sum([3, -2, -1, 3, 4]) == 8 == 3 - 2 - 1 + 3 + 4
    max_contiguous_sum([-2, -1, -3, -4]) == -1 == -1
    '''   
    zipped = list(zip(lst, lst[1:]))
    return max([sum(x) for x in zipped])
