
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
    pass


def get_longest_word(lst):
    '''
    Given a list of words, return the longest word in the list.
    If the list is empty, return None.

    get_longest_word(['one', 'two', 'three']) == 'three'
    get_longest_word(['one', 'two', 'three', 'four']) == 'three'
    get_longest_word([]) == None
    '''
    pass


def get_shortest_word(lst):
    '''
    Given a list of words, return the shortest word in the list.
    If the list is empty, return None.

    get_shortest_word(['one', 'two', 'three']) == 'one'
    get_shortest_word(['one', 'two', 'three', 'four']) == 'one'
    get_shortest_word([]) == None
    '''
    pass


def get_words_in_range(lst, min_len, max_len):
    '''
    Given a list of words, return a list of words that have length greater than or
    equal to min_len and less than or equal to max_len.

    get_words_in_range(['one', 'two', 'three'], 3, 5) == ['three']
    get_words_in_range(['one', 'two', 'three', 'four'], 3, 5) == ['three', 'four']
    get_words_in_range(['one', 'two', 'three'], 0, 2) == []
    get_words_in_range([], 0, 2) == []
    '''
    pass


def get_words_in_range_count(lst, min_len, max_len):
    '''
    Given a list of words, return the count of words that have length greater than or
    equal to min_len and less than or equal to max_len.

    get_words_in_range_count(['one', 'two', 'three'], 3, 5) == 1
    get_words_in_range_count(['one', 'two', 'three', 'four'], 3, 5) == 2
    get_words_in_range_count(['one', 'two', 'three'], 0, 2) == 0
    get_words_in_range_count([], 0, 2) == 0
    '''
    pass


def get_words_in_range_count_map(lst, min_len, max_len):
    '''
    Given a list of words, return a dictionary where the keys are all the lengths of
    words in the list and the values are the count of words that have that length.

    get_words_in_range_count_map(['one', 'two', 'three'], 3, 5) == {3: 1}
    get_words_in_range_count_map(['one', 'two', 'three', 'four'], 3, 5) == {3: 1, 4: 1}
    get_words_in_range_count_map(['one', 'two', 'three'], 0, 2) == {}
    get_words_in_range_count_map([], 0, 2) == {}
    '''
    pass


def get_words_in_range_count_map_filter(lst, min_len, max_len):
    '''
    Given a list of words, return a dictionary where the keys are all the lengths of
    words in the list and the values are the count of words that have that length.
    Only include lengths that are greater than min_len and less than or equal to max_len.

    get_words_in_range_count_map_filter(['one', 'two', 'three'], 3, 5) == {3: 1}
    get_words_in_range_count_map_filter(['one', 'two', 'three', 'four'], 3, 5) == {3: 1, 4: 1}
    get_words_in_range_count_map_filter(['one', 'two', 'three'], 0, 2) == {}
    get_words_in_range_count_map_filter([], 0, 2) == {}
    '''
    pass


def get_words_in_range_count_map_filter_lambda(lst, min_len, max_len):
    '''
    Given a list of words, return a dictionary where the keys are all the lengths of
    words in the list and the values are the count of words that have that length.
    Only include lengths that are greater than min_len and less than or equal to max_len.

    get_words_in_range_count_map_filter_lambda(['one', 'two', 'three'], 3, 5) == {3: 1}
    get_words_in_range_count_map_filter_lambda(['one', 'two', 'three', 'four'], 3, 5) == {3: 1, 4: 1}
    get_words_in_range_count_map_filter_lambda(['one', 'two', 'three'], 0, 2) == {}
    get_words_in_range_count_map_filter_lambda([], 0, 2) == {}
    '''
    pass
