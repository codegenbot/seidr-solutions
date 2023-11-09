#!/usr/bin/env python3

import sys


def main():
    print(encode(sys.argv[1]))



def check(func):
    assert func("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq wRkTg", "This prints if this assert fails"
    print("2 (also good for debugging!)")


def encode(message):
    """
    Write a function that takes a message, and encodes in such a 
    way that it swaps case of all letters, replaces all vowels in 
    the message with the letter that appears 2 places ahead of that 
    vowel in the english alphabet. 
    Assume only letters. 
    
    Examples:
    >>> encode('test')
    'TGST'
    >>> encode('This is a message')
    'tHKS KS C MGSSCGG'
    """

    return message


if __name__ == "__main__":
    main()
