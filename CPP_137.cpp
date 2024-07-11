Here's how you might do this in your Makefile (if you're using make):

```makefile
CXXFLAGS += -I/path/to/boost/include -L/path/to/boost/lib

all:
    $(CXX) $(CXXFLAGS) 4a4949da-fc82-4664-9167-1fdeee2b53bc.cpp -o your_executable_name