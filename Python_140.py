
def fix_spaces(text):
    return text.replace(' ', '_').replace('__', '-')


def sum_numbers(text):
    return sum([int(x) for x in text.split() if x.isdigit()])


def remove_odd_numbers(text):
    return ' '.join([x for x in text.split() if int(x) % 2 == 0])


def remove_odd_numbers_v2(text):
    return ' '.join([x for x in text.split() if int(x) % 2 == 0])


def remove_even_numbers(text):
    return ' '.join([x for x in text.split() if int(x) % 2 != 0])


def remove_even_numbers_v2(text):
    return ' '.join([x for x in text.split() if int(x) % 2 != 0])


def remove_numbers(text):
    return ' '.join([x for x in text.split() if not x.isdigit()])


def remove_numbers_v2(text):
    return ' '.join([x for x in text.split() if not x.isdigit()])


def remove_numbers_v3(text):
    return ' '.join([x for x in text.split() if not x.isdigit()])


def remove_vowels(text):
    return ''.join([x for x in text if x.lower() not in 'aeiou'])


def remove_vowels_v2(text):
    return ''.join([x for x in text if x.lower() not in 'aeiou'])


def remove_vowels_v3(text):
    return ''.join([x for x in text if x.lower() not in 'aeiou'])


def remove_consonants(text):
    return ''.join([x for x in text if x.lower() not in 'bcdfghjklmnpqrstvwxyz'])


def remove_consonants_v2(text):
    return ''.join([x for x in text if x.lower() not in 'bcdfghjklmnpqrstvwxyz'])


def remove_consonants_v3(text):
    return ''.join([x for x in text if x.lower() not in 'bcdfghjklmnpqrstvwxyz'])


def remove_punctuation(text):
    return ''.join([x for x in text if x not in '!@#$%^&*()_+-=[]{};"\|,./<>?`~'])


def remove_punctuation_v2(text):
    return ''.join([x for x in text if x not in '!@#$%^&*()_+-=[]{};"\|,./<>?`~'])


def remove_punctuation_v3(text):
    return ''.join([x for x in text if x not in '!@#$%^&*()_+-=[]{};"\|,./<>?`~'])


def remove_punctuation_v4(text):
    return ''.join([x for x in text if x not in '!@#$%^&*()_+-=[]{};"\|,./<>?`~'])


def remove_punctuation_v5(text):
    return ''.join([x for x in text if x not in '!@#$%^&*()_+-=[]{};"\|,./<>?`~'])


def remove_punctuation_v6(text):
    return ''.join([x for x in text if x not in '!@#$%^&*()_+-=[]{};"\|,./<>?`~'])


def remove_punctuation_v7(text):
    return ''.join([x for x in text if x not in '!@#$%^&*()_+-=[]{};"\|,./<>?`~'])


def remove_punctuation_v8(text):
    return ''.join([x for x in text if x not in '!@#$%^&*()_+-=[]{};"\|,./<>?`~'])


def remove_punctuation_v9(text):
    return ''.join([x for x in text if x not in '!@#$%^&*()_+-=[]{};"\|,./<>?`~'])


def remove_punctuation_v10(text):
    return ''.join([x for x in text if x not in '!@#$%^&*()_+-=[]{};"\|,./<>?`~'])


def remove_punctuation_v11(text):
    return ''.join([x for x in text if x not in '!@#$%^&*()_+-=[]{};"\|,./<>?`~'])


def remove_punctuation_v12(text):
    return ''.join([x for x in text if x not in '!@#$%^&*()_+-=[]{};"\|,./<>?`~'])


def remove_punctuation_v13(text):
    return ''.join([x for x in text if x not in '!@#$%^&*()_+-=[]{};"\|,./<>?`~'])


def remove_punctuation_v14(text):
    return ''.join([x for x in text if x not in '!@#$%^&*()_+-=[]{};"\|,./<>?`~'])


def remove_punctuation_v15(text):
    return ''.join([x for x in text if x not in '!@#$%^&*()_+-=[]{};"\|,./<>?`~'])
