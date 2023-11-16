
def select_words(s, n):
    """Given a string s and a natural number n, you have been tasked to implement 
    a function that returns a list of all words from string s that contain exactly 
    n consonants, in order these words appear in the string s.
    If the string s is empty then the function should return an empty list.
    Note: you may assume the input string contains only letters and spaces.
    Examples:
    select_words("Mary had a little lamb", 4) ==> ["little"]
    select_words("Mary had a little lamb", 3) ==> ["Mary", "lamb"]
    select_words("simple white space", 2) ==> []
    select_words("Hello world", 4) ==> ["world"]
    select_words("Uncle sam", 3) ==> ["Uncle"]
    """
    # Complete the following code given the task description and function signature.
    # You may use the following helper function.
    def count_consonants(word):
        """Given a string word, return the number of consonants in the string word.
        Note: you may assume the input string contains only letters.
        Examples:
        count_consonants("Mary") ==> 2
        count_consonants("Hello") ==> 3
        count_consonants("Uncle") ==> 3
        """
        # Complete the following code given the task description and function signature.
        # You may use the following helper function.
        def is_consonant(letter):
            """Given a string letter, return True if the string letter is a consonant, 
            and False otherwise.
            Note: you may assume the input string contains only letters.
            Examples:
            is_consonant("M") ==> True
            is_consonant("a") ==> False
            is_consonant("e") ==> False
            """
            # Complete the following code given the task description and function signature.
            # You may use the following helper function.
            def is_vowel(letter):
                """Given a string letter, return True if the string letter is a vowel, 
                and False otherwise.
                Note: you may assume the input string contains only letters.
                Examples:
                is_vowel("M") ==> False
                is_vowel("a") ==> True
                is_vowel("e") ==> True
                """
                # Complete the following code given the task description and function signature.
                # You may use the following helper function.
                def is_letter(letter):
                    """Given a string letter, return True if the string letter is a letter, 
                    and False otherwise.
                    Examples:
                    is_letter("M") ==> True
                    is_letter("a") ==> True
                    is_letter("e") ==> True
                    is_letter("1") ==> False
                    is_letter(" ") ==> False
                    """
                    # Complete the following code given the task description and function signature.
                    # You may use the following helper function.
                    def is_lowercase(letter):
                        """Given a string letter, return True if the string letter is a lowercase letter, 
                        and False otherwise.
                        Note: you may assume the input string contains only letters.
                        Examples:
                        is_lowercase("M") ==> False
                        is_lowercase("a") ==> True
                        is_lowercase("e") ==> True
                        """
                        # Complete the following code given the task description and function signature.
                        # You may use the following helper function.
                        def is_uppercase(letter):
                            """Given a string letter, return True if the string letter is an uppercase letter, 
                            and False otherwise.
                            Note: you may assume the input string contains only letters.
                            Examples:
                            is_uppercase("M") ==> True
                            is_uppercase("a") ==> False
                            is_uppercase("e") ==> False
                            """
                            # Complete the following code given the task description and function signature.
                            # You may use the following helper function.
                            def is_string(letter):
                                """Given a string letter, return True if the string letter is a string, 
                                and False otherwise.
                                Examples:
                                is_string("M") ==> True
                                is_string("a") ==> True
                                is_string("e") ==> True
                                is_string(1) ==> False
                                is_string(True) ==> False
                                """
                                # Complete the following code given the task description and function signature.
                                # You may use the following helper function.
                                def is_integer(letter):
                                    """Given a string letter, return True if the string letter is an integer, 
                                    and False otherwise.
                                    Examples:
                                    is_integer("M") ==> False
                                    is_integer("a") ==> False
                                    is_integer("e") ==> False
                                    is_integer(1) ==> True
                                    is_integer(True) ==> False
                                    """
                                    # Complete the following code given the task description and function signature.
                                    # You may use the following helper function.
                                    def is_boolean(letter):
                                        """Given a string letter, return True if the string letter is a boolean, 
                                        and False otherwise.
                                        Examples:
                                        is_boolean("M") ==> False
                                        is_boolean("a") ==> False
                                        is_boolean("e") ==> False
                                        is_boolean(1) ==> False
                                        is_boolean(True) ==> True
                                        """
                                        # Complete the following code given the task description and function signature.
                                        # You may use the following helper function.
                                        def is_true(letter):
                                            """Given a string letter, return True if the string letter is True, 
                                            and False otherwise.
                                            Examples:
                                            is_true("M") ==> False
                                            is_true("a") ==> False
                                            is_true("e") ==> False
                                            is_true(1) ==> False
                                            is_true(True) ==> True
                                            """
                                            # Complete the following code given the task description and function signature.
                                            # You may use the following helper function.
                                            def is_false(letter):
                                                """Given a string letter, return True if the string letter is False, 
                                                and False otherwise.
                                                Examples:
                                                is_false("M") ==> False
                                                is_false("a") ==> False
                                                is_false("e") ==> False
                                                is_false(1) ==> False
                                                is_false(True) ==> False
                                                """
                                                # Complete the following code given the task description and function signature.
                                                # You may use the following helper function.
                                                def is_equal(letter):
                                                    """Given a string letter, return True if the string letter is equal to True, 
                                                    and False otherwise.
                                                    Examples:
                                                    is_equal("M") ==> False
                                                    is_equal("a") ==> False
                                                    is_equal("e") ==> False
                                                    is_equal(1) ==> False
                                                    is_equal(True) ==> True
                                                    """
                                                    # Complete the following code given the task description and function signature.
                                                    # You may use the following helper function.
                                                    def is_not_equal(letter):
                                                        """Given a string letter, return True if the string letter is not equal to True, 
                                                        and False otherwise.
                                                        Examples:
                                                        is_not_equal("M") ==> True
                                                        is_not_equal("a") ==> True
                                                        is_not_equal("e") ==> True
                                                        is_not_equal(1) ==> True
                                                        is_not_equal(True) ==> False
                                                        """
                                                        # Complete the following code given the task description and function signature.
                                                        # You may use the following helper function.
                                                        def is_not(letter):
                                                            """Given a string letter, return True if the string letter is not True, 
                                                            and False otherwise.
                                                            Examples:
                                                            is_not("M") ==> True
                                                            is_not("a") ==> True
                                                            is_not("e") ==> True
                                                            is_not(1) ==> True
                                                            is
