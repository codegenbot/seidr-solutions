} else {
                beats.push_back(1);
            }
        }
    }
    return beats;
}

int main(){
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    std::cout << "Test passed." << std::endl;
    return 0;
}